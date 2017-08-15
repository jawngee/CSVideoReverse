Pod::Spec.new do |s|
  s.name             = "CSVideoReverse"
  s.version          = "0.0.1"
  s.summary          = "A simple Objective-C class for creating a reversed (silent) version of a video file."
  s.homepage         = "https://github.com/chrissung/CSVideoReverse"
  s.license          = { :type => "BSD", :file => "LICENSE" }
  s.author           = { "Chris Sung" => "chrissung@mosojo.com" }
  s.source           = { :git => "https://github.com/chrissung/CSVideoReverse.git", :tag => s.version.to_s }

  s.platform     = :ios, '9.0'
  s.requires_arc = true

  s.source_files = 'Source'
end
