#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex05/main';
						my $output;
						my $expected;
						die "ex05/main failed to run: $?" if $?;

						

my %tests;

						%tests = (
	"$program" => 1,
	"$program 5" => 1,
	"$program 1 5" => 1,
	"$program 5 1" => 0,
	"$program -1 5" => 1,
	"$program 1 -5" => 0,
	"$program 1 1" => 1,
	"$program 1 2 3 4 5" => 1,
	"$program 1 2 3 4 5 6 7 8 9" => 1,
	"$program 1 2 3 4 5 6 7 8 7" => 0,
	"$program 1 2 3 4 5 8 7 8 9" => 0,
	"$program 3 2 3 4 5 6 7 8 9" => 0,
);

						


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex05/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex05/check.pl good!';
					}
				
					