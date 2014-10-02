core = 7.31
api = 2

defaults[projects][subdir] = contrib

; Administration
projects[] = admin_menu
projects[] = admin_views
projects[] = backup_migrate
projects[] = coffee
projects[] = module_filter

; Content
projects[ds][version] = 2.x-dev
projects[ds][patch][] = https://www.drupal.org/files/issues/ds-token-support-for-region-classes-2288345-2.patch
projects[] = ctools
projects[] = views

; Content authoring
projects[] = pathologic

; Development
projects[] = devel
projects[] = search_krumo

; SEO
projects[] = globalredirect
projects[] = metatag
projects[] = pathauto
projects[] = token

; Other
projects[] = transliteration
projects[] = final_polish

; Theme
projects[] = responsive_bartik
projects[] = shiny

; Dependencies
projects[] = auto_entitylabel
projects[] = breakpoints
projects[color_field][version] = 1.x-dev
projects[color_field][patch][] = https://www.drupal.org/files/issues/allow_using_no_color-2230889-2.patch
projects[] = css_field_formatters
projects[] = eck
projects[] = elements
projects[] = entity
projects[] = entityreference
projects[] = features
projects[] = field_formatter_css_class
projects[file_entity][version] = 2.x-dev
projects[] = gmap
projects[inline_entity_form][version] = 1.x-dev
projects[inline_entity_form][patch][] = https://www.drupal.org/files/issues/inline_entity_form-add_callback_field_type-2324901-2.patch
projects[] = location
projects[media][version] = 2.x-dev
projects[] = migrate
projects[] = migrate_extras
projects[] = picture
projects[] = strongarm
projects[] = views_bulk_operations
projects[wysiwyg][version] = 2.x-dev

; Fancy features
projects[fancy_features][type] = module
projects[fancy_features][download][type] = git
projects[fancy_features][download][branch] = 7.x-1.x

; Helper modules
projects[ctools_field][type] = module
projects[ctools_field][download][type] = git
projects[ctools_field][download][branch] = 7.x-1.x

projects[fancy_grid][type] = module
projects[fancy_grid][download][type] = git
projects[fancy_grid][download][branch] = 7.x-1.x

projects[field_split][type] = module
projects[field_split][download][type] = git
projects[field_split][download][branch] = 7.x-1.x

projects[inline_entity_form_preview][type] = module
projects[inline_entity_form_preview][download][type] = git
projects[inline_entity_form_preview][download][branch] = 7.x-1.x

projects[view_mode_selector][type] = module
projects[view_mode_selector][download][type] = git
projects[view_mode_selector][download][branch] = 7.x-1.x

; Libraries
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.5/ckeditor_4.4.5_full.zip

libraries[underscore][download][type] = file
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.4.4.zip

libraries[backbone][download][type] = file
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.0.0.zip

libraries[bgrins-spectrum][download][type] = file
libraries[bgrins-spectrum][download][url] = https://codeload.github.com/bgrins/spectrum/zip/1.5.1
