Pod::Spec.new do |s|
  s.name = 'orion360-sdk-pro-ios'
  s.version = '2.2.47'
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2017 Finwe Ltd, Inc. All rights reserved.
      LICENSE
  }
  s.summary = 'Orion360 Engine for iOS and tvos, second generation (v2.x).'
  s.homepage = 'https://github.com/FinweLtd/orion360-sdk-pro-ios'
  s.author = { 'Hannu Limma' => 'Hannu.Limma@finwe.fi' }
  s.platforms = { :ios => "8.0", :tvos => "9.0" }
  s.source = { :git => 'https://github.com/FinweLtd/orion360-sdk-pro-ios.git', :tag => "#{s.version}" }
  s.source_files = 'orion360-sdk-pro-ios/Headers/*.h'
  s.ios.preserve_paths = 'orion360-sdk-pro-ios/liborion360-sdk-pro-ios.a'
  s.ios.vendored_libraries = 'orion360-sdk-pro-ios/liborion360-sdk-pro-ios.a'
  s.ios.frameworks = 'UIKit', 'Foundation', 'CoreMotion'
  s.tvos.preserve_paths = 'orion360-sdk-pro-ios/liborion360-sdk-pro-ios_tvOS.a'
  s.tvos.vendored_libraries = 'orion360-sdk-pro-ios/liborion360-sdk-pro-ios_tvOS.a'
  s.tvos.frameworks = 'UIKit', 'Foundation'
  s.requires_arc = true
  s.library = 'stdc++'
  s.xcconfig = { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/orion360-sdk-pro-ios"', 'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/orion360-sdk-pro-ios"' }
end
