/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:03:01 by miturk            #+#    #+#             */
/*   Updated: 2024/10/15 18:43:57 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <exception>

class File {
	private:
		std::string _fileName;
		std::string _content;
	public:
		File(std::string fileName);
		File();
		~File();
		void	setFileName(std::string fileName);
		std::string	getFileName();
		void	readFile();
};

#endif