core = 7.x
api = 2

; Drupal core
includes[] = drupal-org-core.make

; Installation profile
projects[fancy_kickstart][type] = profile
projects[fancy_kickstart][download][type] = git
projects[fancy_kickstart][download][url] = http://git.drupal.org/project/fancy_kickstart.git
projects[fancy_kickstart][download][branch] = 7.x-1.x
