#pragma once
#include <vector>
#include "graphic.h"
#include "nlohmann/json.hpp"

class Picture : public Graphic
{
	friend void to_json(nlohmann::json& j, Picture const& picture);
	friend void from_json(const nlohmann::json& j, Picture& picture);

public:
	Picture() = default;
	Picture(std::vector<Graphic const*> graphics);
	void draw() override;
	void save(nlohmann::json &j) const override;
	void load(const nlohmann::json &j) override;
	void add(Graphic * graphic);
	void remove(Graphic * graphic);
	void to_json(nlohmann::json & j) const override;
	void from_json(const nlohmann::json & j) override;
	const Graphic* getGraphic(int index);

private:
	int id_ = 5;
	std::vector<Graphic const*> graphics_;
};