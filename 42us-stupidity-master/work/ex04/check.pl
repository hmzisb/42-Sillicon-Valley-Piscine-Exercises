#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex04/main';
						my $output;
						my $expected;
						die "ex04/main failed to run: $?" if $?;

						

my %tests;

						%tests = (
	"$program" => 0,
	"$program asdf" => 0,
	"$program z" => 1,
	"$program asdf zxcv" => 1,
	"$program asdf qwer zxcv uiop hjkl" => 1,
	"$program asdf qwer xcv uiop hjkl" => 0,
	"$program '' '' z '' ''" => 1,
	"$program '' '' a '' ''" => 0,
	"$program zxcv asdf" => 1,
	"$program zxcv asdf zxcv" => 2,
	"$program z z z z z" => 5,
	"$program asdf qwer io uiop zxcxcvzzzzzz" => 1,
);

						


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex04/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex04/check.pl good!';
					}
				
					