�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " b a s i c _ m a t h _ t e s t _ d a t a . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " a r m _ m a t h . h "                       / *   F U T s   * /  
 # i n c l u d e   " r e f . h "                                 / *   R e f e r e n c e   F u n c t i o n s   * /  
 # i n c l u d e   " t e s t _ t e m p l a t e s . h "  
 # i n c l u d e   " b a s i c _ m a t h _ t e m p l a t e s . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 # d e f i n e   J T E S T _ A R M _ O F F S E T _ T E S T ( s u f f i x )                               \  
         B A S I C _ M A T H _ D E F I N E _ T E S T _ T E M P L A T E _ B U F 1 _ E L T 1 _ B L K (     \  
                 o f f s e t ,                                                                           \  
                 s u f f i x ,                                                                           \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) ,                                       \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) ,                                       \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) )  
  
 J T E S T _ A R M _ O F F S E T _ T E S T ( f 3 2 ) ;  
 J T E S T _ A R M _ O F F S E T _ T E S T ( q 3 1 ) ;  
 J T E S T _ A R M _ O F F S E T _ T E S T ( q 1 5 ) ;  
 J T E S T _ A R M _ O F F S E T _ T E S T ( q 7 ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p .   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( o f f s e t _ t e s t s )  
 {  
         J T E S T _ T E S T _ C A L L ( a r m _ o f f s e t _ f 3 2 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ o f f s e t _ q 3 1 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ o f f s e t _ q 1 5 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ o f f s e t _ q 7 _ t e s t ) ;  
 }  