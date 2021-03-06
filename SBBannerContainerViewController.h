//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NCBannerAccessoryHostViewControllerDelegate.h"
#import "NCInteractiveNotificationHostDelegate.h"
#import "SBBannerButtonViewControllerDelegate.h"
#import "SBBulletinWindowClient.h"
#import "SBMotionGestureObserver.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class FBUIApplicationResignActiveAssertion, NCBannerAccessoryHostViewController, NCContentHostViewController, NCInteractiveNotificationHostViewController, NSString, SBBannerButtonViewController, SBBannerContainerView, SBBannerContextView, SBUIBannerContext, UIImage, UIView;

@interface SBBannerContainerViewController : UIViewController <NCInteractiveNotificationHostDelegate, SBBannerButtonViewControllerDelegate, NCBannerAccessoryHostViewControllerDelegate, SBMotionGestureObserver, SBBulletinWindowClient, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    NCInteractiveNotificationHostViewController *_interactiveViewController;
    NCBannerAccessoryHostViewController *_accessoryViewController;
    NCContentHostViewController *_secondaryContentViewController;
    NCContentHostViewController *_inlayContentViewController;
    SBBannerButtonViewController *_buttonViewController;
    _Bool _notifiedAppeared;
    _Bool _manualDismissalEnabled;
    SBUIBannerContext *_bannerContext;
    SBBannerContainerView *_containerView;
    SBBannerContextView *_bannerContextView;
    FBUIApplicationResignActiveAssertion *_resignActiveAssertion;
    UIView *_backgroundView;
    struct CGRect _keyboardFrame;
    double _maximumBannerHeight;
    _Bool _pulledDown;
    id <SBBannerContextViewControllerDelegate> _delegate;
    UIImage *_backgroundImage;
}

@property(readonly, nonatomic, getter=isPulledDown) _Bool pulledDown; // @synthesize pulledDown=_pulledDown;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SBBannerContextView *bannerContextView; // @synthesize bannerContextView=_bannerContextView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) id <SBBannerContextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_keyboardWillChange:(id)arg1;
- (id)_bulletin;
- (void)_updateMotionGestureObservation;
- (void)didReceiveRaiseGesture;
- (void)hostViewController:(id)arg1 didRequestSticky:(_Bool)arg2;
- (void)hostViewControllerDidRequestSticky:(id)arg1;
- (void)hostViewControllerDidRequestDismissal:(id)arg1;
- (void)buttonViewController:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;
- (void)_removeButtonViewController;
- (void)_setButtonViewController:(id)arg1;
- (id)_newbuttonViewController;
- (void)hostViewController:(id)arg1 serviceRequestedDismissalEnabled:(_Bool)arg2;
- (void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(id)arg1;
- (_Bool)requiresKeyWindow;
- (void)bulletinWindowDidRotateFromOrientation:(long long)arg1;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(long long)arg1 duration:(double)arg2;
- (void)bulletinWindowWillRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)_removeInteractiveViewController;
- (void)_setInteractiveViewController:(id)arg1;
- (void)_removeInlayContentViewController;
- (void)_setInlayContentViewController:(id)arg1;
- (void)_setInlayContentViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeSecondaryContentViewController;
- (void)_setSecondaryContentViewController:(id)arg1;
- (void)_setSecondaryContentViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeAccessoryViewController;
- (void)_setAccessoryViewController:(id)arg1;
- (void)_setAccessoryViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeChildViewController:(id)arg1 withTransition:(CDUnknownBlockType)arg2;
- (void)_addChildViewController:(id)arg1 withTransition:(CDUnknownBlockType)arg2;
- (void)_removeChildPullDownViewController:(id)arg1;
- (void)_addChildPullDownViewController:(id)arg1;
- (id)_bannerViewCreatingIfNecessary;
- (_Bool)_hasActions;
- (id)_bannerItem;
- (double)_percentDismissed;
- (void)_updateMaximumPullDownViewHeight;
- (void)_updateMaximumContainerHeightForOrientation:(long long)arg1;
- (void)_updateMaximumBannerHeight;
- (void)_updateMaximumHeightsWithOrientation:(long long)arg1;
- (void)_updateMaximumHeights;
- (double)_pullDownBottomOverhangHeight;
- (double)_bannerContentHeight;
- (double)_maximumPullDownViewHeight;
- (double)_miniumBannerContentHeight;
- (double)_pullDownViewHeight;
- (double)_preferredPullDownViewHeight;
- (void)_setPullDownViewWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGRect)_bannerFrameForOrientation:(long long)arg1;
- (struct CGRect)_bannerFrame;
- (void)_handleBannerContainerTapGesture:(id)arg1;
- (void)_handleBannerTapGesture:(id)arg1 withActionContext:(id)arg2;
- (void)_handleBannerTapGesture:(id)arg1;
- (void)willPresentFromActionIdentifier:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@property(readonly, nonatomic) _Bool showsKeyboard;
@property(readonly, nonatomic) _Bool canPullDown;
- (double)preferredMaximumHeight;
- (void)setBannerPullDisplacement:(double)arg1;
- (void)_noteDidPullDown;
- (void)setBannerPullPercentage:(double)arg1;
- (void)_loadRemoteViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_newBackgroundViewWithFrame:(struct CGRect)arg1;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

