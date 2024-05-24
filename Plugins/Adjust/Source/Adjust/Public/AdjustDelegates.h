//
//  AdjustDelegates.h
//  Adjust SDK
//
//  Created by Uglješa Erceg (@uerceg) on 27th September 2018.
//  Copyright © 2018-2021 Adjust GmbH. All rights reserved.
//

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AdjustAttribution.h"
#include "AdjustSessionSuccess.h"
#include "AdjustSessionFailure.h"
#include "AdjustEventSuccess.h"
#include "AdjustEventFailure.h"
#include "AdjustDelegates.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnAttributionChangedDelegate, const FAdjustAttribution&, Attribution);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnSessionSuccessDelegate, const FAdjustSessionSuccess&, SessionSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnSessionFailureDelegate, const FAdjustSessionFailure&, SessionFailure);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnEventSuccessDelegate, const FAdjustEventSuccess&, EventSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnEventFailureDelegate, const FAdjustEventFailure&, EventFailure);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnDeferredDeeplinkDelegate, const FString&, Deeplink);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnGoogleAdvertisingIdDelegate, const FString&, GoogleAdId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdjustOnAuthorizationStatusDelegate, const int, AuthorizationStatus);

DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnAttributionChangedNonDynamicDelegate, const FAdjustAttribution&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnSessionSuccessNonDynamicDelegate, const FAdjustSessionSuccess&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnSessionFailureNonDynamicDelegate, const FAdjustSessionFailure&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnEventSuccessNonDynamicDelegate, const FAdjustEventSuccess&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnEventFailureNonDynamicDelegate, const FAdjustEventFailure&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnDeferredDeeplinkNonDynamicDelegate, const FString&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnGoogleAdvertisingIdNonDynamicDelegate, const FString&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAdjustOnAuthorizationStatusNonDynamicDelegate, const int);

UCLASS(ClassGroup = (Adjust), meta = (BlueprintSpawnableComponent))
class ADJUST_API UAdjustDelegates : public USceneComponent
{
    GENERATED_BODY()
    
public:
    UAdjustDelegates(const FObjectInitializer& ObjectInitializer);

    // dynamic delegates
    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnAttributionChangedDelegate OnAttributionChangedDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnSessionSuccessDelegate OnSessionSuccessDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnSessionFailureDelegate OnSessionFailureDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnEventSuccessDelegate OnEventSuccessDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnEventFailureDelegate OnEventFailureDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnDeferredDeeplinkDelegate OnDeferredDeeplinkDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnGoogleAdvertisingIdDelegate OnGoogleAdvertisingIdDelegate;

    UPROPERTY(BlueprintAssignable, Category = Adjust)
    FAdjustOnAuthorizationStatusDelegate OnAuthorizationStatusDelegate;

    // non dynamic delegates
    FAdjustOnAttributionChangedNonDynamicDelegate OnAttributionChangedNonDynamicDelegate;

    FAdjustOnSessionSuccessNonDynamicDelegate OnSessionSuccessNonDynamicDelegate;

    FAdjustOnSessionFailureNonDynamicDelegate OnSessionFailureNonDynamicDelegate;

    FAdjustOnEventSuccessNonDynamicDelegate OnEventSuccessNonDynamicDelegate;

    FAdjustOnEventFailureNonDynamicDelegate OnEventFailureNonDynamicDelegate;

    FAdjustOnDeferredDeeplinkNonDynamicDelegate OnDeferredDeeplinkNonDynamicDelegate;

    FAdjustOnGoogleAdvertisingIdNonDynamicDelegate OnGoogleAdvertisingIdNonDynamicDelegate;

    FAdjustOnAuthorizationStatusNonDynamicDelegate OnAuthorizationStatusNonDynamicDelegate;
};
