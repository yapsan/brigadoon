<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 



function fitvittle_omega_kickstart_preprocess_page(&$variables) {
	
	global $user;


  if($user->uid == 0){	
	
//	$gh = arg(0);
//	$gi = arg(1);
//	$gj = arg(2);
	
//	Print_r ($gh);
//	Print_r ($gi);
//	Print_r ($gj);
    if(arg(0) == 'checkout' && is_numeric(arg(1)) || arg(2) == "review") {
      
	  drupal_set_title('Membership Information');
	  
	  }

 }	




	/**
   * Display the non member front page for visitors to the
     site who are not members and/or not loged-in
   */

	if ($variables['is_front'] && !$variables['logged_in']) {
    $variables['theme_hook_suggestions'][] ='page__front__anonymous';
  }
  
  
  
/** 
 * Hide the node title on the thanks content type which is used as a welcome page
 * for new members to the site. This page is display after new member have paid
 * the membership and cmpleated the checkout process.
 */
   


   if (!empty($variables['node']) && $variables['node']->type == 'thanks') {
    $variables['title'] = FALSE;
  }

  if (!empty($variables['node']) && $variables['node']->type == 'join') {
    $variables['title'] = FALSE;
  }


  
	
} 







/**
 * Implements hook_form_alter().
 * Making minor changes to the default login form. Changing the text on the form and the text on the button
 * and also redirecting to front page to sign up for membership.
 */


function fitvittle_omega_kickstart_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'user_login') {
    $form['name']['#prefix']  = '<div id="' . $form_id . '_form">';
    $form['name']['#prefix'] .= '<h1>' . t('Login') . '</h1>';
    $form['pass']['#suffix'] = l(t('Forgot your password?'), 'user/password', array('attributes' => array('class' => array('login-password'), 'title' => t('Get a new password'))));
    $form['actions']['#suffix']  = '</div>';
    if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL) != USER_REGISTER_ADMINISTRATORS_ONLY) {
      $form['actions']['#suffix'] .= '<div class="create-account clearfix">';
      $form['actions']['#suffix'] .= "\r<h2>" . t('I don\'t have a membership') . "</h2>";
      $form['actions']['#suffix'] .= "\r" . l(t('Sign up now'), '/', array('attributes' => array('class' => array('login-register'), 'title' => t('Create a new account'))));
      $form['actions']['#suffix'] .= '</div>';
    }
  }
  if ($form_id == 'user_pass') {
    $form['name']['#prefix'] = '<div id="' . $form_id . '_form">';
    $form['name']['#prefix'] .= '<h1>' . t('Request a new password') . '</h1>';
    $form['actions']['#suffix'] = '<div class="back-to-login clearfix">' . l(t('Back to login'), 'user/login', array('attributes' => array('class' => array('login-account'), 'title' => t('Sign in')))) . '</div>';
    $form['actions']['#suffix'] .= '</div>';
  }
  if ($form_id == 'user_register_form') {
    $form['account']['name']['#prefix'] = '<div id="' . $form_id . '">';
    $form['account']['name']['#prefix'] .= '<h1>' . t('Sign-up for membership') . '</h1>';
    $form['actions']['submit']['#suffix'] = '<div class="back-to-login clearfix">' . l(t('Back to login'), 'user/login', array('attributes' => array('class' => array('login-account'), 'title' => t('Sign in')))) . '</div>';
    $form['actions']['submit']['#suffix'] .= '</div>';
  }

 // dsm($form_id);
  //dsm($form);
}





/**
 * Implements hook_form_FORM_ID_alter().
 * Making minor changes to the add to cart form on the become a member page. Changing the text on add to cart button
 * and also making some other minor changes if needed.
*/


function fitvittle_omega_kickstart_form_commerce_cart_add_to_cart_form_53_alter(&$form, &$form_state) {
  $form['submit']['#value'] = t('Purchase your membership');
  $form['submit']['#prefix'] = '<div class="purchase-mem">';
  $form['submin']['#suffix'] = '</div>';
}



 
 
 
 function fitvittle_omega_kickstart_preprocess_status_messages(&$variables) {
  if (!empty($_SESSION['messages']['status'])) {
    $message_text_to_remove = "Registration successful. You are now logged in.";
    $key = array_search($message_text_to_remove, $_SESSION['messages']['status']);
    if ($key !== FALSE) {
      unset($_SESSION['messages']['status'][$key]);
      // Remove the empty status message wrapper if no other messages have been set.
      if (empty($_SESSION['messages']['status'])) {
        unset($_SESSION['messages']['status']);
      }
    }
  }
}
 


 
 
 
 
 
 
 
































































 
 
 





/**

function fitvittle_omega_kickstart_preprocess_status_messages(&$variables) {
  //dpm(drupal_get_messages($variables['display']));
  $message = 'Registration successful. You are now logged in.';
  if (isset($_SESSION['messages'])) {
    foreach ($_SESSION['messages'] as $type => $messages) {
      if ($type == 'status') {
        $pos = array_search($message, $messages);
        if ($pos !== FALSE) {
          unset($_SESSION['messages'][$type][$pos]);
        }
      }
    }
	
	// Reset array indexes. Otherwise it doesn’t work with some theme templates.
      $_SESSION['messages']['status'] = array_values($_SESSION['messages']['status']);
	
	// Remove the empty status message wrapper if no other messages have been set.
	if (empty($_SESSION['messages']['status'])) {
		unset($_SESSION['message']['status']);
	}
  }
}




 */



/**
 * Implements hook_exit().

function fitvittle_omega_kickstart_exit() {
  $remove_strings = 'Registration successful. You are now logged in.';
  if (!empty($_SESSION['messages']['status'])) {
    foreach ($_SESSION['messages']['status'] as $key => $message) {
      
        if(strpos($message, $string) !== FALSE) {
          unset($_SESSION['messages']['status'][$key]);
        }
      
    }
    // Remove the empty status message wrapper if no other messages have been set.
    if (empty($_SESSION['messages']['status'])) {
      unset($_SESSION['messages']['status']);
    }
  }
}

 */
 