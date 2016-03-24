/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    RadioAvailabilityController *_availabilityController;
    NSMutableSet *_connections;
    BOOL _hasRefreshedStations;
    NSXPCListener *_listener;
    RadioRecentStationsController *_recentStationsController;
}

@property (nonatomic, retain) RadioAvailabilityController *availabilityController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) RadioRecentStationsController *recentStationsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (id)availabilityController;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)recentStationsController;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id /* block */)arg1;
- (void)setAvailabilityController:(id)arg1;
- (void)setRecentStationsController:(id)arg1;
- (void)start;

@end