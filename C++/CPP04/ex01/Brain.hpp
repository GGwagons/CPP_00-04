/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:05:56 by miturk            #+#    #+#             */
/*   Updated: 2024/10/29 15:34:32 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdefine BRAIN_HPP
# define BRAIN_HPP

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();
}

#endif