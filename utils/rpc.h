#pragma once

#include "../DiscordRPC/lib/discord_register.h"
#include "../DiscordRPC/lib//discord_rpc.h"

namespace discord_rpc
{
	void init();
	void update();
	void shutdown();
	void disable();
}