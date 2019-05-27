# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    validation.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 23:09:24 by ikrkharb          #+#    #+#              #
#    Updated: 2019/05/21 23:51:02 by ikrkharb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

FILES=`ls samples`

for entry in $FILES
do
	echo "########## [ $entry ] ##########"
	result=`./fillit samples/$entry`
	echo "$result"
done
