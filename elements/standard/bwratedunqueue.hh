// -*- c-basic-offset: 4 -*-
#ifndef CLICK_BWRATEDUNQUEUE_HH
#define CLICK_BWRATEDUNQUEUE_HH
#include "elements/standard/ratedunqueue.hh"
CLICK_DECLS

/*
 * =c
 * BandwidthRatedUnqueue(RATE)
 * =s packet scheduling
 * pull-to-push converter
 * =processing
 * Pull inputs, push outputs
 * =d
 * 
 * Pulls packets at the given bandwidth RATE, and pushes them out its single
 * output.  RATE is a bandwidth with default units of bytes per second.
 *
 * =a RatedUnqueue, Unqueue, BandwidthShaper, BandwidthRatedSplitter */

class BandwidthRatedUnqueue : public RatedUnqueue { public:
  
    BandwidthRatedUnqueue();
    ~BandwidthRatedUnqueue();
  
    const char *class_name() const	{ return "BandwidthRatedUnqueue"; }
  
    bool run_task();
  
};

CLICK_ENDDECLS
#endif
