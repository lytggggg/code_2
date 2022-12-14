??# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " r e f . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " i n t r i n s i c s _ t e m p l a t e s . h "  
 # i n c l u d e   " i n t r i n s i c s _ t e s t _ d a t a . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q A D D 8 ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q S U B 8 ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q A D D 1 6 ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S H A D D 1 6 ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q S U B 1 6 ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S H S U B 1 6 ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q A S X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S H A S X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q S A X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S H S A X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S M U S D X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S M U A D X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q A D D ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ Q S U B ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 3 ( _ _ S M L A D ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 3 ( _ _ S M L A D X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 3 ( _ _ S M L S D X ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 4 ( _ _ S M L A L D ,   q 3 1 ,   q 6 3 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 4 ( _ _ S M L A L D X ,   q 3 1 ,   q 6 3 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S M U A D ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 2 ( _ _ S M U S D ,   q 3 1 ) ;  
 I N T R I N S I C S _ T E S T _ T E M P L A T E _ E L T 1 ( _ _ S X T B 1 6 ,   q 3 1 ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( i n t r i n s i c s _ t e s t s )  
 {  
         / *  
             T o   s k i p   a   t e s t ,   c o m m e n t   i t   o u t .  
         * /  
       J T E S T _ T E S T _ C A L L ( _ _ Q A D D 8 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q S U B 8 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q A D D 1 6 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S H A D D 1 6 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q S U B 1 6 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S H S U B 1 6 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q A S X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S H A S X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q S A X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S H S A X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M U S D X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M U A D X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q A D D _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ Q S U B _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M L A D _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M L A D X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M L S D X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M L A L D _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M L A L D X _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M U A D _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S M U S D _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( _ _ S X T B 1 6 _ t e s t ) ;  
 }  