#include "stdafx.h"
#include <algorithm>
#include "picture.h"
#include "graphicCreator.h"

Picture::Picture(std::vector<Graphic const*> graphics) : graphics_(graphics)
{
}

void to_json(nlohmann::json & j, Picture const & picture)
{
	for (const auto & graphic : picture.graphics_)
	{
		if (graphic != nullptr)
		{
			nlohmann::json js;
			graphic->to_json(js);
			j["Picture"] += js;
		}
		else
		{
			assert(false);
		}
	}
}

void from_json(const nlohmann::json & j, Picture & picture)
{
	const GraphicCreator& graphicCreator = GraphicCreator::getInstance();
	for (auto it = j.begin(); it != j.end(); ++it)
	{
		std::cout << it.key() << " | " << it.value() << "\n";
		auto name = it.key();
		auto const graphic = graphicCreator.createGraphic(name); // Factory
		graphic->from_json(j);
	}
}

void Picture::to_json(nlohmann::json & j) const
{
	::to_json(j, *this);
}

void Picture::from_json(const nlohmann::json & j)
{
	::from_json(j, *this);
}

void Picture::draw()
{

}

void Picture::save(nlohmann::json &j) const
{
	to_json(j);
}

void Picture::load(const nlohmann::json &j)
{
	::from_json(j, *this);
}

void Picture::add(Graphic * graphic)
{
	graphics_.emplace_back(graphic);
}

void Picture::remove(Graphic * graphic)
{
	graphics_.erase(std::remove(graphics_.begin(), graphics_.end(), graphic), graphics_.end());
}

const Graphic * Picture::getGraphic(int index)
{
	return graphics_[index];
}


