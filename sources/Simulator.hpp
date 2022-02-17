#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include "menu/Menu.hpp"
#include "renderer/Renderer.hpp"
#include "fractals/Fractal.hpp"
#include "fractals/Julia.hpp"
#include "fractals/Mandelbrot.hpp"
#include "fractals/BurningShip.hpp"
#include "fractals/Buddhabrot.hpp"
#include "compute_shader/ComputeShader.hpp"
#include "compute_shader/Image.hpp"
#include "renderer/ColorPallet.hpp"

/**
 * @brief A static class representing the simulation.
 */
class Simulator
{
public:

	static Fractal*					fractal;
	static double					area_width;	// The width of the area on the screen.
	static std::array<double, 2>	position;	// The center of the area on the screen.
	static bool						image_done;

	/**
	 * @brief Initialize the simulation.
	 */
	static void init();

	/**
	 * @brief Reset the simulation
	 */
	static void reset();

	static std::array<double, 2> screen_to_world(dim::Vector2int position);
	static dim::Vector2int world_to_screen(std::array<double, 2> position);

	static void update();

	/**
	 * @brief Check the simulation events.
	 *
	 * @param sf_event the SFML event object
	 */
	static void check_events(const sf::Event& sf_event);

	/**
	 * @brief Draw the simulation.
	 */
	static void draw();
};

#endif
