#ifndef JULIA_HPP
#define JULIA_HPP

#include "fractals/Fractal.hpp"

class Julia : public Fractal
{
public:

	std::array<float, 2>	c;
	int						max_iterations;
	int						pallet_index;
	bool					smooth;

	Julia();
	Julia(const Julia& other) = default;

	Type get_type() const override;
	void menu() override;
	void reset() override;
	void compute() override;
};

#endif
