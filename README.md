#Integration

##Downloading

Download Instal Advertiser SDK from here:

##Setting Up

### Using CocoaPods

Our sdk is distribuited with [CocoaPods](http://coccoapods.org)

    pod 'InstalPublisherSDK', :git => 'https://bitbucket.org/tbdsrl/instal-advertiser-sdk-ios-distr.git'


### Manual integration
Download zip package and include it in your project.

You will need to include Apple's  **AdSupport.framework** in you project.

##Tracking Install
In your **AppDelegeate.m** file please include following header:

```
#!c++

#import "InstalAdvertiserSDK.h"
```

And in your application: didFinishLaunchingWithOptions: add following line:

```
#!c++

[[InstalAdvertiserSDK sharedInstance] trackInstallWithApiKey:@"APIKEY" appStoreId:@"STOREID"];
```

Where:

**APIKEY** - is a key for your offer.

**STOREID** - is your application apple store id.

You can find both values in your Offer Detail page in Instal.com panel.


##Tracking Events
To track an event you need to call
```
#!c++

[[InstalAdvertiserSDK sharedInstance] trackEvent:@"Event Name"];
```
If you want to add numeric value to your event use passing NSNubmer object as value.

```
#!c++

[[InstalAdvertiserSDK sharedInstance] trackEvent:@"Event Name" value:@(12.3)];
```

##Troubleshooting:
If you are getting an "Undefined symbol for architecture" compile error it means you forgot to include AdSupport.framework in you project
