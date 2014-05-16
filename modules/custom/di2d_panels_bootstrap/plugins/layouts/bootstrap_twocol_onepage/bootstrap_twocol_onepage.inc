<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Two Columns Stacked'),
    'category' => t('Bootstrap'),
    'icon' => 'bootstrap_twocol_onepage.png',
    'theme' => 'bootstrap_twocol_onepage',
    'admin css' => '../panels-bootstrap-layouts-admin.css',
    'regions' => array(
        'row1' => t('Row 1'),
        'left1' => t('Left 1'),
        'right1' => t('Right 1'),
        'row2' => t('Row 2'),
        'left2' => t('Left 2'),
        'right2' => t('Right 2'),
        'row3' => t('Row 3'),
        'left3' => t('Left 3'),
        'right3' => t('Right 3'),
        'row4' => t('Row 4'),
        'left4' => t('Left 4'),
        'right4' => t('Right 4'),
        'row5' => t('Row 5'),
    ),
);
