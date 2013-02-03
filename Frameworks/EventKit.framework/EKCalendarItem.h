/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItem : NSObject {
}

@property(copy) NSArray *alarms;
@property(retain) EKCalendar *calendar;
@property(copy,readonly) NSDate *lastModifiedDate;
@property(copy) NSString *notes;
@property(copy) NSString *title;

- (void)addAlarm:(id)arg1;
- (id)alarms;
- (id)calendar;
- (id)lastModifiedDate;
- (id)notes;
- (void)removeAlarm:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end