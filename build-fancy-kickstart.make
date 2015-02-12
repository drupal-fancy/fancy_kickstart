core = 8.x
api = 2

includes[] = "http://cgit.drupalcode.org/fancy_kickstart/plain/drupal-org-core.make?h=8.x-1.x"

; Installation profile
projects[fancy_kickstart][type] = profile
projects[fancy_kickstart][download][type] = git
projects[fancy_kickstart][download][url] = http://git.drupal.org/project/fancy_kickstart.git
projects[fancy_kickstart][download][branch] = 8.x-1.x
