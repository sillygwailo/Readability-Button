INSTALLATION
============

1. enable the module as you would normally
2. in admin/people/permissions give yourself (and others) permission to view the Readability button. If you want all all site visitors to be able to access the button, enable the permission for Anonymous and Authenticated users.
3. in the same screen, give yourself and other administrators you trust the ability to administer the Readability settings

VERIFICATION
============

1. if you haven't already, sign up for a publisher account at Readability https://www.readability.com/
2. after signing up, start the process to claim your domain at the Readability website. If your site is at http://www.example.com/, use example.com
3. copy the verification code to your computer's clipboard
4. visit admin/config/services/readability_button in your Drupal site and replace the default HTML code with the HTML Readability gave you
5. check the "Verify domain?" button
6. make sure the HTML code appears in your website. Clear your Drupal cache just in case. You'll need to logout to become the anonymous user to be absolutely sure the Readability web service can see your HTML code
7. go back to the Readability site and ask Readability to verify your site
8. back at your Drupal site, through admin/config/services/readability_button uncheck "Verify domain?" (since you don't need the code anymore)

CONFIGURATION
=============

1. login to your website as an administrator
2. visit the content types screen at admin/structure/types
3. for each content type that you would like to show a Readability button:
  1. click the "edit" operation for the content type
  2. select the "Readability settings" tab
  3. check "Enable Readability button" box
  4. select a weight for the button. This will determine where the button will appear. You will probably want a weight less than zero (a minus number) so that it appears above content.
4. visit a node from the content type to verify that the button appears. You may want to visit content in each role that you've given permission to.