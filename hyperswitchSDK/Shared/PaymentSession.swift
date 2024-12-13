//
//  PaymentSession.swift
//  Hyperswitch
//
//  Created by Harshit Srivastava on 07/03/24.
//

import Foundation
import UIKit

protocol MockThirdPartySDKProtocol {
    func performOperationWithFatalError(completion: @escaping (Result<String, Error>) -> Void)
    func fetchConfiguration() -> String
    func performUIThreadOperation() -> Void
    func performDeadlockOperation() -> Void
    func performUnitializedOperation() -> Void
    func performMemoryLoadOperation() -> Void
    
    // Incompatible Architecture
    // Including a dependency built for a different architecture will cause runtime errors
}

class MockThirdPartySDK: MockThirdPartySDKProtocol {

    enum MockError: Error {
        case operationFailed
    }

    func performOperationWithFatalError(completion: @escaping (Result<String, Error>) -> Void) {
            let success = Bool.random()
            if success {
                completion(.success("Operation completed successfully!"))
            } else {
                completion(.failure(MockError.operationFailed))
                fatalError()
            }
    }

    func fetchConfiguration() -> String {
        return "Mock configuration data"
    }
    
    func performUIThreadOperation() {
        DispatchQueue.global().async {
            // Attempt to update UI on a background thread
            let label = UILabel()
            label.text = "Updated"
        }
    }
    
    func performDeadlockOperation() {
        let queue = DispatchQueue(label: "com.sdkExample.myqueue")
        queue.sync {
            queue.sync {
                print("Deadlock!") // This will never execute
            }
        }
    }
    
    func performUnitializedOperation() {
        let array = [1, 2, 3]
        print(array[5])
    }
    
    func performMemoryLoadOperation() {
        var largeArray: [Data] = []
        for _ in 0..<10_000 {
            largeArray.append(Data(repeating: 0, count: 10_000_000))
        }
    }
}

class MockThirdPartySDKWithLogging: MockThirdPartySDK {
    override func performOperationWithFatalError(completion: @escaping (Result<String, Error>) -> Void) {
        print("[Mock SDK] performOperation called")
        super.performOperationWithFatalError(completion: completion)
    }

    override func fetchConfiguration() -> String {
        print("[Mock SDK] fetchConfiguration called")
        return super.fetchConfiguration()
    }
    
    override func performUIThreadOperation() {
        print("[Mock SDK] performUIThreadOperation called")
        super.performUIThreadOperation()
    }
    
    override func performDeadlockOperation() {
        print("[Mock SDK] performDeadlockOperation called")
        super.performDeadlockOperation()
    }
    
    override func performUnitializedOperation() {
        print("[Mock SDK] performUnitializedOperation called")
        super.performUnitializedOperation()
    }
    
    override func performMemoryLoadOperation() {
        print("[Mock SDK] performMemoryLoadOperation called")
        super.performMemoryLoadOperation()
    }
}


@frozen public enum PaymentResult {
    case completed(data: String)
    case canceled(data: String)
    case failed(error: Error)
}

public class PaymentSession {
    internal static var isPresented: Bool = false
    internal static var paymentIntentClientSecret: String?
    internal static var ephemeralKey: String?
    internal var mockSdk: MockThirdPartySDKWithLogging?
    
    public init(publishableKey: String, customBackendUrl: String? = nil, customParams: [String : Any]? = nil, customLogUrl: String? = nil){
        APIClient.shared.publishableKey = publishableKey
        APIClient.shared.customBackendUrl = customBackendUrl
        APIClient.shared.customLogUrl = customLogUrl
        APIClient.shared.customParams = customParams
        self.mockSdk = MockThirdPartySDKWithLogging()
    }
    
    public func initPaymentSession(paymentIntentClientSecret: String){
        PaymentSession.paymentIntentClientSecret = paymentIntentClientSecret
    }
    
    public func initPaymentManagementSession(ephemeralKey: String, paymentIntentClientSecret: String? = nil){
        PaymentSession.ephemeralKey = ephemeralKey
        PaymentSession.paymentIntentClientSecret = paymentIntentClientSecret
    }
}
