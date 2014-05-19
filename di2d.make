; This file was auto-generated by drush make. And then modified by Q :)
core = 7.2

api = 2
projects[drupal][version] = "7"

; Profiles

projects[di2d][download][type] = "git"
projects[di2d][download][url] = "https://github.com/Max-Headroom/di2d_git.git"
projects[di2d][type] = "profile"
projects[di2d][download][branch] = "7.2"

; Modules

projects[admin_menu][version] = "3.x-dev"
projects[admin_menu][subdir] = "contrib"

projects[admin_menu_dropdown][version] = "3"
projects[admin_menu_dropdown][subdir] = "contrib"

projects[admin_views][version] = "1"
projects[admin_views][subdir] = "contrib"

projects[backports][version] = "1"
projects[backports][subdir] = "contrib"

projects[backup_migrate][version] = "2"
projects[backup_migrate][subdir] = "contrib"

projects[better_watchdog_ui][version] = "2"
projects[better_watchdog_ui][subdir] = "contrib"

projects[breakpoints][version] = "1"
projects[breakpoints][subdir] = "contrib"

projects[ctools][version] = "1"
projects[ctools][subdir] = "contrib"

projects[captcha][version] = "1"
projects[captcha][subdir] = "contrib"

projects[caption_filter][version] = "1"
projects[caption_filter][subdir] = "contrib"

projects[date][version] = "2"
projects[date][subdir] = "contrib"

projects[defaultconfig][version] = "1"
projects[defaultconfig][patches][] = http://drupal.org/files/fix-defaultconfig_rebuild_all.patch
projects[defaultconfig][subdir] = "contrib"

projects[devel][version] = "1"
projects[devel][subdir] = "contrib"

projects[drupal_reset][version] = "1"
projects[drupal_reset][subdir] = "contrib"

projects[elements][version] = "1"
projects[elements][subdir] = "contrib"

projects[entity][version] = "1"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1"
projects[entityreference][subdir] = "contrib"

projects[fape][version] = "1"
projects[fape][subdir] = "contrib"

projects[features][version] = "2"
projects[features][subdir] = "contrib"

projects[features_override][version] = "2"
projects[features_override][subdir] = "contrib"

projects[fences][version] = "1.x-dev"
projects[fences][subdir] = "contrib"

projects[field_group][version] = "1"
projects[field_group][subdir] = "contrib"

projects[field_group_multiple][version] = "1"
projects[field_group_multiple][subdir] = "contrib"

projects[fieldable_panels_panes][version] = "1.x-dev"
projects[fieldable_panels_panes][subdir] = "contrib"

projects[file_entity][version] = "2"
projects[file_entity][subdir] = "contrib"

projects[fpa][version] = "2"
projects[fpa][subdir] = "contrib"

projects[globalredirect][version] = "1"
projects[globalredirect][subdir] = "contrib"

projects[google_analytics][version] = "2"
projects[google_analytics][subdir] = "contrib"

projects[honeypot][version] = "1"
projects[honeypot][subdir] = "contrib"

projects[html5_tools][version] = "1.x-dev"
projects[html5_tools][subdir] = "contrib"

projects[image_resize_filter][version] = "1"
projects[image_resize_filter][subdir] = "contrib"

projects[imce][version] = "1"
projects[imce][subdir] = "contrib"

projects[imce_wysiwyg][version] = "1.x-dev"
projects[imce_wysiwyg][subdir] = "contrib"

projects[jquery_update][version] = "2"
projects[jquery_update][subdir] = "contrib"

projects[libraries][version] = "2"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1"
projects[link][subdir] = "contrib"

projects[linkit][version] = "2"
projects[linkit][subdir] = "contrib"

projects[live_css][version] = "2"
projects[live_css][subdir] = "contrib"

projects[manualcrop][version] = "1"
projects[manualcrop][subdir] = "contrib"

projects[menu_block][version] = "2"
projects[menu_block][subdir] = "contrib"

projects[metatag][version] = "1"
projects[metatag][subdir] = "contrib"

projects[modernizr][version] = "3"
projects[modernizr][subdir] = "contrib"

projects[module_filter][version] = "2"
projects[module_filter][subdir] = "contrib"

projects[nice_menus][version] = "2"
projects[nice_menus][subdir] = "contrib"

projects[panelizer][version] = "3.x-dev"
projects[panelizer][subdir] = "contrib"

projects[panels][version] = "3.x-dev"
projects[panels][subdir] = "contrib"
projects[panels][patches][] = https://drupal.org/files/issues/undefined_property_notices_fix-2098515-2.patch
projects[panels][patches][] = https://drupal.org/files/issues/panels-ipe-save-2120849-27.patch

projects[panels_breadcrumbs][version] = "2"
projects[panels_breadcrumbs][subdir] = "contrib"

projects[panels_extra_layouts][version] = "2"
projects[panels_extra_layouts][subdir] = "contrib"

projects[panels_extra_styles][version] = "1"
projects[panels_extra_styles][subdir] = "contrib"

projects[panels_mini_ipe][version] = "1.x-dev"
projects[panels_mini_ipe][subdir] = "contrib"

projects[pathauto][version] = "1"
projects[pathauto][subdir] = "contrib"

projects[save_draft][version] = "1"
projects[save_draft][subdir] = "contrib"

projects[simple_gmap][version] = "1"
projects[simple_gmap][subdir] = "contrib"

projects[strongarm][version] = "2"
projects[strongarm][subdir] = "contrib"

projects[tablefield][version] = "2"
projects[tablefield][patches][] = http://drupal.org/files/tablefield_event_click_conflict.patch
projects[tablefield][subdir] = "contrib"

projects[token][version] = "1"
projects[token][subdir] = "contrib"

projects[uuid][version] = "1"
projects[uuid][subdir] = "contrib"

projects[variable][version] = "2"
projects[variable][subdir] = "contrib"

projects[views][version] = "3"
projects[views][patches][] = http://drupal.org/files/views-exposed-sorts-2037469-1.patch
projects[views][subdir] = "contrib"

projects[views_autocomplete_filters][version] = "1"
projects[views_autocomplete_filters][subdir] = "contrib"

projects[views_bootstrap][version] = "3"
projects[views_bootstrap][subdir] = "contrib"

projects[views_bulk_operations][version] = "3"
projects[views_bulk_operations][subdir] = "contrib"

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch
projects[wysiwyg][patch][1338956] = http://drupal.org/files/wysiwyg-html5-required-1338956-11.patch
projects[wysiwyg][patch][1757684] = http://drupal.org/files/wysiwyg-ajax-error-1757684-13.patch
projects[wysiwyg][patches][] = http://drupal.org/files/wysiwyg-1802394-4.patch

; Themes
projects[bootstrap][version] = "3"

; Libraries
;libraries[bootstrap][download][type] = "git"
;libraries[bootstrap][download][url] = " https://github.com/twbs/bootstrap.git"
;libraries[bootstrap][directory_name] = "bootstrap"
;libraries[bootstrap][type] = "library"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.0/ckeditor_4.4.0_standard.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

libraries[modernizr][download][type] = "git"
libraries[modernizr][download][url] = "https://github.com/Modernizr/Modernizr.git"
libraries[modernizr][directory_name] = "modernizr"
libraries[modernizr][type] = "library"

libraries[FirePHPCore][download][type] = "get"
libraries[FirePHPCore][download][url] = "http://www.firephp.org/DownloadRelease/FirePHPLibrary-FirePHPCore-0.3.2"
libraries[FirePHPCore][directory_name] = "FirePHPCore"
libraries[FirePHPCore][type] = "library"

libraries[markitup][download][type] = "git"
libraries[markitup][download][url] = "https://github.com/markitup/1.x.git"
libraries[markitup][directory_name] = "markitup"
libraries[markitup][type] = "library"

