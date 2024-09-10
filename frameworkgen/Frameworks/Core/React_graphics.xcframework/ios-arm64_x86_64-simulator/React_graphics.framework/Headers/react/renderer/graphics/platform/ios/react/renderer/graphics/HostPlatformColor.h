/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <react/renderer/graphics/ColorComponents.h>
#include <react/utils/hash_combine.h>
#include <cmath>

namespace facebook::react {

struct DynamicColor {
  int32_t lightColor = 0;
  int32_t darkColor = 0;
  int32_t highContrastLightColor = 0;
  int32_t highContrastDarkColor = 0;
};

struct Color {
  Color(int32_t color);
  Color(const DynamicColor& dynamicColor);
  Color(const ColorComponents& components);
  Color(std::shared_ptr<void> uiColor);
  int32_t getColor() const;
  std::shared_ptr<void> getUIColor() const {
    return uiColor_;
  }
  ColorComponents getColorComponents() const {
    float ratio = 255;
    int32_t primitiveColor = getColor();
    return ColorComponents{
        (float)((primitiveColor >> 16) & 0xff) / ratio,
        (float)((primitiveColor >> 8) & 0xff) / ratio,
        (float)((primitiveColor >> 0) & 0xff) / ratio,
        (float)((primitiveColor >> 24) & 0xff) / ratio};
  }
  bool operator==(const Color& other) const;
  bool operator!=(const Color& other) const;
  operator int32_t() const {
    return getColor();
  }

 private:
  std::shared_ptr<void> uiColor_;
};

namespace HostPlatformColor {

#if defined(__clang__)
#define NO_DESTROY [[clang::no_destroy]]
#else
#define NO_DESTROY
#endif

NO_DESTROY static const facebook::react::Color UndefinedColor = Color(nullptr);
} // namespace HostPlatformColor

inline Color hostPlatformColorFromComponents(ColorComponents components) {
  return Color(components);
}

inline ColorComponents colorComponentsFromHostPlatformColor(Color color) {
  return color.getColorComponents();
}

} // namespace facebook::react

template <>
struct std::hash<facebook::react::Color> {
  size_t operator()(const facebook::react::Color& color) const {
    auto seed = size_t{0};
    facebook::react::hash_combine(seed, color.getColor());
    return seed;
  }
};
