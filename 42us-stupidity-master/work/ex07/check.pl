#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex07/main';
						my $output;
						my $expected;
						die "ex07/main failed to run: $?" if $?;

						

my %tests;

						%tests = (
	"$program" => '',
	"$program a" => 'a,',
	"$program c b a" => 'a,b,c,',
	"$program b c a" => 'a,b,c,',
	"$program a c b" => 'a,b,c,',
	"$program c b a d" => 'a,b,c,d,',
	"$program a b" => 'a,b,',
	"$program b a" => 'a,b,',
	"$program asdf asde asdd" => 'asdd,asde,asdf,',
);

						


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex07/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex07/check.pl good!';
					}
				
					