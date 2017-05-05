Pod::Spec.new do |s|
  s.name         = 'SqliteLibrary'
  s.version      = '0.0.1'
  s.summary      = 'Sqlite-master is a high level request util based on FMDB.'
  s.homepage     = 'https://github.com/chengshiliang/Sqlite-master'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'chengshiliang' => '285928582@qq.com' }
  s.source       = { :git => 'https://github.com/chengshiliang/Sqlite-master.git', :tag => s.version.to_s }
  s.platform     = :ios, '8.0'
  s.source_files = 'SqliteLibrary/*.{h,m}'
  s.requires_arc = true
  s.frameworks   = 'Foundation', 'UIKit'
  s.dependency   'FMDB', '~> 2.0'
  s.library      = 'sqlite3'
end