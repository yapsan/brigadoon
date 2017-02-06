<?php
/**
 * @file
 * additional_rules_for_fitvittle.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function additional_rules_for_fitvittle_default_rules_configuration() {
  $items = array();
  $items['commerce_message_commerce_order_message_admin_order_notification'] = entity_import('rules_config', '{ "commerce_message_commerce_order_message_admin_order_notification" : {
      "LABEL" : "Commerce order message: Admin order notification e-mail",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "3",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "message_notify", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "commerce_order_admin_order_notification_email",
              "param_user" : [ "commerce-order:owner" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:message-commerce-order" ],
            "value" : [ "commerce-order" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "message_notify_process" : {
            "message" : [ "entity-created" ],
            "save_on_fail" : "0",
            "save_on_success" : "0",
            "mail" : "info@esibeautysalon.com"
          }
        }
      ]
    }
  }');
  $items['rules_change_page_title_of_checkout_pane_page'] = entity_import('rules_config', '{ "rules_change_page_title_of_checkout_pane_page" : {
      "LABEL" : "Change page title of checkout pane\\/page",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_rules_extra" ],
      "ON" : {
        "commerce_rules_extra_process_checkout_page" : [],
        "commerce_rules_extra_process_checkout_pane" : []
      },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "site:current-cart-order" ],
            "product_type" : { "value" : { "license_role" : "license_role" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_rules_extra_change_page" : {
            "page_id" : "review",
            "title" : "Setup Your billing Informatiuon",
            "submit_value" : "Start  Membership"
          }
        }
      ]
    }
  }');
  $items['rules_disable_shipping_pane_and_page_for_license_role_purchase'] = entity_import('rules_config', '{ "rules_disable_shipping_pane_and_page_for_license_role_purchase" : {
      "LABEL" : "Disable shipping pane and page for License Role purchase",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_rules_extra" ],
      "ON" : { "commerce_rules_extra_process_checkout_pane" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "license_role" : "license_role" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "commerce_order_compare_total_product_quantity" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "commerce_shipping",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "customer_profile_shipping",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "commerce_payment",
            "page_id" : "checkout",
            "enabled" : "1"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "checkout_review",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "cart_contents",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_go_to_new_member_welcome_page'] = entity_import('rules_config', '{ "rules_go_to_new_member_welcome_page" : {
      "LABEL" : "Go to new member welcome page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "license_role" : "license_role" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "node\\/66" } } ]
    }
  }');
  $items['rules_on_order_completion_create_and_change_status_to_invoiced'] = entity_import('rules_config', '{ "rules_on_order_completion_create_and_change_status_to_invoiced" : {
      "LABEL" : "On order completion create and change status to invoiced",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Billy" ],
      "REQUIRES" : [ "rules", "commerce_order", "commerce_payment", "entity" ],
      "ON" : {
        "commerce_payment_order_paid_in_full" : [],
        "commerce_order_update" : []
      },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:status" ], "value" : "pending" } }
      ],
      "DO" : [
        { "commerce_order_update_status" : { "commerce_order" : [ "commerce_order" ], "order_status" : "invoiced" } }
      ]
    }
  }');
  $items['rules_redirect_to_checkout_after_adding_recurring_product'] = entity_import('rules_config', '{ "rules_redirect_to_checkout_after_adding_recurring_product" : {
      "LABEL" : "Redirect to checkout after adding recurring product",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_order", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:uid" ], "value" : "0" } },
        { "AND" : [
            { "commerce_order_contains_product_type" : {
                "commerce_order" : [ "commerce_order" ],
                "product_type" : { "value" : { "license_role" : "license_role" } },
                "operator" : "\\u003E=",
                "value" : "1"
              }
            }
          ]
        }
      ],
      "DO" : [ { "redirect" : { "url" : "checkout" } } ]
    }
  }');
  $items['rules_remove_billing_information'] = entity_import('rules_config', '{ "rules_remove_billing_information" : {
      "LABEL" : "Remove Billing information",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_rules_extra" ],
      "ON" : { "commerce_rules_extra_process_checkout_pane" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "license_role" : "license_role" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "commerce_order_compare_total_product_quantity" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "commerce_shipping",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "cart_contents",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "customer_profile_shipping",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "1"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "customer_profile_billing",
            "page_id" : "review",
            "enabled" : "1",
            "weight" : "-20"
          }
        },
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "checkout_completion_message",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_remove_other_license_role_products_from_cart'] = entity_import('rules_config', '{ "rules_remove_other_license_role_products_from_cart" : {
      "LABEL" : "Remove other license role products from cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_prepare" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "license_role" : "license_role" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "entity_delete" : { "data" : [ "commerce-order:commerce-line-items:0" ] } }
      ]
    }
  }');
  $items['rules_update_order_status_from_pending_to_completed_after_order_'] = entity_import('rules_config', '{ "rules_update_order_status_from_pending_to_completed_after_order_" : {
      "LABEL" : "Update order status from pending to completed after order paid in full",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "9",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "ORDER IS FIRST PAID IN FULL RULE HAS BEEN FIRED SUCCESSFULLY!" } }
      ]
    }
  }');
  return $items;
}
