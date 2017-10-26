Pod::Spec.new do |s|

  s.name         = "DistPopView"
  s.version      = "1.0.0"
  s.summary      = "Like WeChat Click AddButton Icon Pop Selection View"
  s.author       = { "Damrin" => "75081647@qq.com" }
  s.homepage    = 'https://github.com/Damsir/DistPopView'
  s.source      = { :git => 'https://github.com/Damsir/DistPopView.git', :tag => s.version }
  s.license = "MIT"
  s.platform = :ios, "8.0"
  s.requires_arc = true
  s.source_files = "DistPopView", "DistPopView/**/*.{h,m}"
  # s.public_header_files = "DistPopView/*.h"
  s.framework = 'UIKit'
  s.ios.deployment_target = "8.0"

end
