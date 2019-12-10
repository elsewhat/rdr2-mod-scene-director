#pragma once
#include <vector>
#include <string>
#include "scripthook\inc\types.h"

struct RelationshipGroup
{
	char* id;
	std::string name;
	DWORD actorHash;
};

std::vector<RelationshipGroup> getAllRelationshipGroups();
RelationshipGroup getDefaultRelationshipGroup();
RelationshipGroup getNextRelationshipGroup(RelationshipGroup current);