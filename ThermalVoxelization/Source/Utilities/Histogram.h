#pragma once

/**
*	@file Histogram.h
*	@authors Alfonso L�pez Ruiz (alr00048@red.ujaen.es)
*	@date 16/04/2021
*/

/**
*	@brief
*/
class Histogram
{
protected:
	vec2				_boundary;			//!<
	std::vector<float>* _data;				//!<
	std::vector<float>	_histogram;			//!<

public:
	/**
	*	@brief Constructor. 
	*/
	Histogram(std::vector<float>* data);

	/**
	*	@brief 
	*/
	void buildHistogram(unsigned numBins, float minValue, float maxValue, bool density = true);

	/**
	*	@brief  
	*/
	void exportLatex(const std::string& filename);
};

