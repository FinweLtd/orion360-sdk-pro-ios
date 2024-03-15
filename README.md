orion360-sdk-pro-ios
==================

Introduction
-------

This is a binary delivery of the Orion360 Engine for iOS and tvOS.

What's new
-------
Build 2.2.51, Mar 15, 2024:
* Updated OpenSSL for iOS

Build 2.2.50, Aug 25, 2023:
* Supports also Xcode 13, otherwise the same as version 2.2.49

Build 2.2.49, Aug 24, 2023 (requires at least Xcode 14):
* Added alternative addOrionContent function with avPlayer parameter to OrionView for cases where the AVPlayer needs to be created by the app
* min iOS and tvOS platform versions changed to 11.0

Build 2.2.48, Sep 16, 2022:
* Added OrionMediaURL for accessing secured content
* Updated dependencies

Installation
-------

The easiest way is to use CocoaPods. It takes care of all required frameworks and third party dependencies:

```
source 'https://github.com/FinweLtd/orion360-sdk-pro-ios-specs.git'

platform :ios, "11.0"
workspace 'myworkspace'

target "mytarget" do
    # Third party libs
    pod 'orion360-sdk-pro-ios'
end
```
