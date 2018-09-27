/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter {
    NAFuture * _alarmManagerForSynchronizationFuture;
    NSMutableSet * _internalAlarmsBeingAdded;
    NSMutableSet * _internalAlarmsBeingRemoved;
    NSMutableSet * _internalAlarmsBeingUpdated;
    NSHashTable * _observers;
    NAFuture * _setupAccessoryAdapterModeFuture;
}

@property (nonatomic, readonly) HMAccessoryCollectionSetting *alarmCollectionSetting;
@property (nonatomic, retain) NAFuture *alarmManagerForSynchronizationFuture;
@property (nonatomic, readonly, copy) NSSet *alarmsWithPendingEdits;
@property (nonatomic, readonly, copy) NSMutableSet *internalAlarmsBeingAdded;
@property (nonatomic, readonly, copy) NSMutableSet *internalAlarmsBeingRemoved;
@property (nonatomic, readonly, copy) NSMutableSet *internalAlarmsBeingUpdated;
@property (nonatomic, readonly) bool isAdapterReady;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) NAFuture *setupAccessoryAdapterModeFuture;

- (void).cxx_destruct;
- (void)_alarmWasAdded:(id)arg1;
- (void)_alarmWasDeleted:(id)arg1;
- (void)_alarmWasUpdated:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_notifyObserversOfUpdates;
- (void)_respondToAlarmManagerUpdate;
- (void)_setupDebugHandler;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)_synchronizeMobileTimerToHomeKitWithChangeType:(unsigned long long)arg1;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)addAlarm:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)alarmCollectionSetting;
- (id)alarmCollectionSettingFuture;
- (id)alarmManagerAlarms;
- (id)alarmManagerForSynchronizationFuture;
- (id)alarmSettingsCurrentItemsFuture;
- (id)alarmsWithPendingEdits;
- (id)allAlarms;
- (id)allAlarmsFuture;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;
- (id)internalAlarmsBeingAdded;
- (id)internalAlarmsBeingRemoved;
- (id)internalAlarmsBeingUpdated;
- (bool)isAdapterReady;
- (id)observers;
- (id)removeAlarm:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAlarmManagerForSynchronizationFuture:(id)arg1;
- (void)setObservers:(id)arg1;
- (id)setupAccessoryAdapterModeFuture;
- (id)updateAlarm:(id)arg1;

@end