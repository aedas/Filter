/*
 * Filter.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include <vector>

#ifndef FILTER_H_
#define FILTER_H_

template <class T>
class Filter {
public:
	Filter<T>(){};
	virtual ~Filter<T>(){};
	std::vector<T> filter(std::vector<T> input, bool (*filter) (T)) {
		std::vector<T> ans = {};
		for (int i = 0; i < input.size(); i++) {
			if (filter(input[i])) {
				ans.push_back(input[i]);
			}
		}
		return ans;
	}
};

#endif /* FILTER_H_ */
