#include "rpc.h"
#include <Windows.h>
#include<ctime>

DiscordRichPresence discordPresence;
static bool state = true;
void discord_rpc::init()
{
	DiscordEventHandlers handlers;
	memset(&handlers, 0, sizeof(handlers));
	// paladins: 528145079819436043
	Discord_Initialize("1035073003240837160", &handlers, true, "444090");
	update();
	state = true;
}

void discord_rpc::update()
{
	/* create a discord application @ https://discord.com/developers/applications name it ur hack name
	for Discord_Initialize("id", &handlers, true, nullptr); replace id with your bot client ID.
	for a picture to show add a image inside of Rich Presence  art assets add image than use that name for largeImageKey.
	*/

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.state = "discord.gg/UTZWB6vxWV";
	discordPresence.details = "Cheating on Paladins!";
	discordPresence.largeImageKey = "floppa"; //large image file name no extension
	discordPresence.largeImageText = "Odin V4 | By Wooteck (Xiloe)";
	discordPresence.startTimestamp = std::time(0);
	Discord_UpdatePresence(&discordPresence); //do the do
}

void discord_rpc::shutdown()
{
	if (state)
		Discord_Shutdown();
	state = false;
}
void discord_rpc::disable() {
	Discord_ClearPresence();
}