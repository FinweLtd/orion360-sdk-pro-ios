orion360-sdk-pro-ios
==================

Introduction
-------

This is a binary delivery of the Orion360 Engine for iOS and tvos.

What's new
-------
Build 2.2.47, Jun 20, 2017:
* Performance improvements and bug fixes

Installation
-------

The easiest way is to use CocoaPods. It takes care of all required frameworks and third party dependencies:

```
source 'https://github.com/FinweLtd/orion360-sdk-pro-ios-specs.git'

platform :ios, "8.0"
workspace 'myworkspace'

target "mytarget" do
    # Third party libs
    pod 'orion360-sdk-pro-ios'
end
```
