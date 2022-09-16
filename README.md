orion360-sdk-pro-ios
==================

Introduction
-------

This is a binary delivery of the Orion360 Engine for iOS and tvOS.

What's new
-------
Build 2.2.48, Sep 16, 2022:
* Added OrionMediaURL for accessing secured content
* Updated dependencies

Installation
-------

The easiest way is to use CocoaPods. It takes care of all required frameworks and third party dependencies:

```
source 'https://github.com/FinweLtd/orion360-sdk-pro-ios-specs.git'

platform :ios, "10.0"
workspace 'myworkspace'

target "mytarget" do
    # Third party libs
    pod 'orion360-sdk-pro-ios'
end
```
