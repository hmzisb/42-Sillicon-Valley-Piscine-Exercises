#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex08/main';
						my $output;
						my $expected;
						die "ex08/main failed to run: $?" if $?;

						

my %tests;

						%tests = (
	"$program" => '',
	"$program a" => 'a,',
	"$program c b a" => 'c,b,a,',
	"$program b c a" => 'c,b,a,',
	"$program a c b" => 'c,b,a,',
	"$program c b a d" => 'd,c,b,a,',
	"$program a b" => 'b,a,',
	"$program b a" => 'b,a,',
	"$program asdf asde asdd" => 'asdf,asde,asdd,',
);

						


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex08/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex08/check.pl good!';
					}
				
					