core = 7.x
api = 2

; Drupal core
includes[] = http://cgit.drupalcode.org/sandbox-yan_nick-2341721/plain/drupal-org-core.make

; Installation profile
projects[fancy_kickstart][type] = profile
projects[fancy_kickstart][download][type] = git
projects[fancy_kickstart][download][url] = http://git.drupal.org/sandbox/yan_nick/2341721.git
projects[fancy_kickstart][download][branch] = 7.x-1.x
