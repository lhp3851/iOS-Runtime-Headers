/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationManagementControllerSettingsDelegate <NSObject>

@required

- (NCNotificationSectionSettings *)notificationManagementController:(id <NCNotificationManagementController>)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;

@optional

- (void)notificationManagementControllerDidDismissManagementView:(id <NCNotificationManagementController>)arg1;

@end
