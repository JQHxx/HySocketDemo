#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HyModelParser.h"
#import "HyModelParserProtocol.h"
#import "NSObject+HyModelParser.h"
#import "AFMultipartFormDataObject.h"
#import "AFNetwork.h"
#import "AFNetworkSingleTask.h"
#import "HyNetwork.h"
#import "HyNetworkBaseTaskInfo.h"
#import "HyNetworkCompletionObject.h"
#import "HyNetworkFailureObject.h"
#import "HyNetworkMutipleTasks.h"
#import "HyNetworkMutipleTasksInfo.h"
#import "HyNetworkSignleTaskInfo.h"
#import "HyNetworkSuccessObject.h"
#import "HyMultipartFormDataProtocol.h"
#import "HyNetworkBaseTaskInfoProtocol.h"
#import "HyNetworkBaseTaskProtocol.h"
#import "HyNetworkCacheProtocol.h"
#import "HyNetworkCompletionProtocol.h"
#import "HyNetworkFailureProtocol.h"
#import "HyNetworkManager.h"
#import "HyNetworkMutipleTasksInfoProtocol.h"
#import "HyNetworkMutipleTasksProtocol.h"
#import "HyNetworkProtocol.h"
#import "HyNetworkSingleTaskInfoProtocol.h"
#import "HyNetworkSingleTaskProtocol.h"
#import "HyNetworkSuccessProtocol.h"
#import "HyNetworkTypedef.h"
#import "NSObject+HyNetwork.h"
#import "YYNetworkCache.h"
#import "HyTipViewAnimationDismissFade.h"
#import "HyTipViewAnimationDismissNone.h"
#import "HyTipViewAnimationDismissScale.h"
#import "HyTipViewAnimationDismissStretch.h"
#import "HyTipViewAnimationDismissTranslation.h"
#import "HyTipViewAnimation.h"
#import "HyTipViewAnimationProtocol.h"
#import "HyTipViewAnimationShowFade.h"
#import "HyTipViewAnimationShowNone.h"
#import "HyTipViewAnimationShowScale.h"
#import "HyTipViewAnimationShowStretch.h"
#import "HyTipViewAnimationShowTranslation.h"
#import "HyTip.h"
#import "HyTipProtocol.h"
#import "HyTipView.h"
#import "HyTipViewProtocol.h"
#import "HyTipViewPosition.h"
#import "HyTipViewPositionProtocol.h"
#import "HyTipBottomTool.h"
#import "HyTipCenterTool.h"
#import "HyTipTopTool.h"
#import "HyHUD.h"
#import "HyHUDView.h"
#import "HyTipStatus.h"
#import "HyTipStatusView.h"
#import "HyTipText.h"
#import "HyTipTextView.h"

FOUNDATION_EXPORT double HyBaseComponentsVersionNumber;
FOUNDATION_EXPORT const unsigned char HyBaseComponentsVersionString[];

