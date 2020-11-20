Pod::Spec.new do |s|
  s.name         = "Xendit"
  s.version      = "3.0.0-alpha2"
  s.summary      = "Xendit makes it easy to collect credit card data securely without it having to touch your server"
  s.homepage     = "https://www.xendit.co"
  s.license      = "MIT"
  s.author             = { "Xendit Developers" => "thirdpartyintegrations@xendit.co" }
  s.social_media_url   = "https://www.facebook.com/xendit"
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/xendit/xendit-sdk-ios.git', :tag => s.version }
  s.ios.vendored_frameworks = 'Xendit.framework'
  s.pod_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
