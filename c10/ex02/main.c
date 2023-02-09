/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:41:54 by csamb             #+#    #+#             */
/*   Updated: 2023/02/09 00:44:24 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

t_config	argparser(int argc, char **argv)
{
	t_config	conf;

	conf.firstfileidx = -1;
	conf.givenvalue = 0;
	conf.readfromstdin = 0;
	if (argc < 3 || (ft_strcmp(argv[1], "-c") == 0 && argc < 4))
	{
		conf.readfromstdin = 1;
		if (argc == 2)
			conf.givenvalue = ft_atoi(argv[1] + 2);
		else
			conf.givenvalue = ft_atoi(argv[2]);
		return (conf);
	}
	if (ft_strcmp(argv[1], "-c") == 0)
	{
		conf.firstfileidx = 3;
		conf.givenvalue = ft_atoi(argv[2]);
	}
	else
	{
		conf.firstfileidx = 2;
		conf.givenvalue = ft_atoi(argv[1] + 2);
	}
	return (conf);
}

int	main(int argc, char**argv)
{
	t_config	conf;
	int			fd;
	int			fileindex;

	conf = argparser(argc, argv);
	fileindex = conf.firstfileidx;
	if (conf.readfromstdin)
		ft_tail(conf.givenvalue, 0);
	while (fileindex < argc && fileindex != -1)
	{
		fd = open(argv[fileindex], O_RDONLY);
		if (fd < 0)
		{
			exception_handler(argv[fileindex], argv[0]);
			close(fd);
			conf.firstfileidx++;
		}
		else
		{
			file_headers(argv[fileindex], argc, conf.firstfileidx, fileindex);
			ft_tail(conf.givenvalue, fd);
		}
		fileindex++;
	}
	return (0);
}
