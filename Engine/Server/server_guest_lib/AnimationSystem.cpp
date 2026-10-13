#include "AnimationSystem.h"
#include "ActiveMagicEffectsMap.h"
#include "AnimationData.h"
#include "MpActor.h"

AnimationSystem::AnimationSystem()
{
  animationCallbacks = {
    {
      "blockStart",
      [](MpActor* actor) {
        actor->SetIsBlockActive(true);
      },
    },
    {
      "blockStop",
      [](MpActor* actor) {
        actor->SetIsBlockActive(false);
      },
    }
  };
}

void AnimationSystem::Process(MpActor* actor, const AnimationData& animData)
{
  CIString s = animData.animEventName.data();
  auto it = animationCallbacks.find(s);
  if (it == animationCallbacks.end()) {
    return;
  }
  it->second(actor);
}
