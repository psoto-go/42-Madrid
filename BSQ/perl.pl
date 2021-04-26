# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    perl.pl                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/16 20:05:44 by psoto-go          #+#    #+#              #
#    Updated: 2020/12/16 20:09:17 by psoto-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
