
#pragma once

#include "ItemHandler.h"
#include "../World.h"





class cItemSugarcaneHandler :
	public cItemHandler
{
public:
	cItemSugarcaneHandler(int a_ItemType)
		: cItemHandler(a_ItemType)
	{

	}

	virtual bool IsPlaceable() override
	{
		return true;
	}

	virtual BLOCKTYPE GetBlockType() override
	{
		return E_BLOCK_SUGARCANE;
	}

	virtual NIBBLETYPE GetBlockMeta(short a_ItemDamage) override
	{
		return 0;	//Not grown yet
	}
} ;




