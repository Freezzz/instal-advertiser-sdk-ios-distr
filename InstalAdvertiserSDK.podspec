Pod::Spec.new do |s|
  s.name         = "InstalAdvertiserSDK"
  s.version      = "0.0.1"
  s.summary      = "Advertiser SDK for Instal.com"

  s.description  = <<-DESC
                   Advertiser SDK for Instal.com that allows you to track application installations and events
                   DESC

  s.homepage     = "https://instal.com/"
  s.license      = { :type => "MIT", :file => "LICENSE.md" }

  s.author             = { "Instal.com" => "hello@instal.com" }
  s.social_media_url   = "https://twitter.com/instal_now"

  s.platform     = :ios, "6.0"
  s.source       = { :git => "https://bitbucket.org/tbdsrl/instal-advertiser-sdk-ios-distr.git", :tag => "0.0.1" }

  s.source_files  = 'SDK', 'SDK/**/*.{h,m}'
  s.vendored_library = 'SDK/libInstalAdvertiserSDK.a'

  s.frameworks = 'AdSupport'

  s.public_header_files = "SDK/**/*.h"

  s.requires_arc = true

end
