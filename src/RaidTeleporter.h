#pragma once

#include "InstanceScript.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedGossip.h"
#include "dungeonmaps.h"
#include "Configuration/Config.h"
#include <vector>


class RaidTeleporterScript : public GameObjectScript {
private:
    int offset = 0;
    int totalBosses = 0;
    std::vector<RaidTeleLocations::Teleport_destination> teleLocations;

public:
	void ZonePrep(GameObject* go);
	RaidTeleporterScript() : GameObjectScript("RaidTeleporter") { }
	bool OnGossipHello(Player* player, GameObject* go) override;
	bool OnGossipSelect(Player* player, GameObject* /*go*/, uint32 sender, uint32 action) override;

};
