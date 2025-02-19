<?php

/* changes these values to suit your local configuration */

$rrdpath = "/data/asstats/rrd";
$daystatsfile = "/data/asstats/asstats/asstats_day.txt";
$rrdtool = "/usr/bin/rrdtool";

$daypeerstatsfile = "/data/asstats/peerasstats_day.txt";
$showpeeras = false;

$asinfofile = "asinfo.txt";
$knownlinksfile = "/data/asstats/conf/knownlinks";
$outispositive = false;
$show95th = true;

$ntop = 20;
$showv6 = true;
$showtitledetail = true;
$hidelinkusagename = false;

$vertical_label = true;			# vertical IN/OUT label in graph
$brighten_negative = true;		# brighten the "negative" part of graphs

$whois = "/usr/bin/whois";
$assetpath = "asset";
$asset_cache_life = "604800";	# 604800 seconds = 7 days

$compat_rrdtool12 = false;		# compatibility with RRDtool 1.2 (show95th will not work if this is set)

$my_asn = "1234";	# Our ASN - Used for search in PeeringDB API

/* Custom links to be shown for each AS. You can use %as% as a
   placeholder for the ASN. */
$customlinks = array(
	'PeeringDB' => 'https://www.peeringdb.com/asn/%as%',
	'robtex' => 'https://www.robtex.com/as/as%as%.html',
	'HE' => 'http://bgp.he.net/AS%as%',
	'RIPEstat' => 'https://stat.ripe.net/AS%as%#tabId=at-a-glance',
	'CIDR v4' => 'http://www.cidr-report.org/cgi-bin/as-report?as=AS%as%&view=2.0',
	'CIDR v6' => 'http://www.cidr-report.org/cgi-bin/as-report?as=AS%as%&view=2.0&v=6',
	'Radar Qrator' => 'https://radar.qrator.net/as%as%/'
);

/* Custom time intervals for top N AS */

/*
$top_intervals[] = array(
	'hours' => 7*24,
	'statsfile' => '/data/asstats/asstats/asstats_week.txt',
	'label' => '7 dias'
);
$top_intervals[] = array(
	'hours' => 30*24,
	'statsfile' => '/data/asstats/asstats/asstats_month.txt',
	'label' => '30 dias'
);
*/

/* END - no closing php tag needed here (prevents problems with stray whitespace) */
