??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           i r q _ c t r l . h  
   *   @ b r i e f         I n t e r r u p t   C o n t r o l l e r   A P I   h e a d e r   f i l e  
   *   @ v e r s i o n     V 1 . 0 . 0  
   *   @ d a t e           2 3 .   J u n e   2 0 1 7  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i f       d e f i n e d   (   _ _ I C C A R M _ _   )  
     # p r a g m a   s y s t e m _ i n c l u d e                   / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   f o r   M I S R A   c h e c k   * /  
 # e l i f   d e f i n e d   ( _ _ c l a n g _ _ )  
     # p r a g m a   c l a n g   s y s t e m _ h e a d e r       / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * /  
 # e n d i f  
  
 # i f n d e f   I R Q _ C T R L _ H _  
 # d e f i n e   I R Q _ C T R L _ H _  
  
 # i n c l u d e   < s t d i n t . h >  
  
 # i f n d e f   I R Q H A N D L E R _ T  
 # d e f i n e   I R Q H A N D L E R _ T  
 / / /   I n t e r r u p t   h a n d l e r   d a t a   t y p e  
 t y p e d e f   v o i d   ( * I R Q H a n d l e r _ t )   ( v o i d ) ;  
 # e n d i f  
  
 # i f n d e f   I R Q N _ I D _ T  
 # d e f i n e   I R Q N _ I D _ T  
 / / /   I n t e r r u p t   I D   n u m b e r   d a t a   t y p e  
 t y p e d e f   i n t 3 2 _ t   I R Q n _ I D _ t ;  
 # e n d i f  
  
 / *   I n t e r r u p t   m o d e   b i t - m a s k s   * /  
 # d e f i n e   I R Q _ M O D E _ T R I G _ P o s                       ( 0 U )  
 # d e f i n e   I R Q _ M O D E _ T R I G _ M s k                       ( 0 x 0 7 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )  
 # d e f i n e   I R Q _ M O D E _ T R I G _ L E V E L                   ( 0 x 0 0 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   l e v e l   t r i g g e r e d   i n t e r r u p t  
 # d e f i n e   I R Q _ M O D E _ T R I G _ L E V E L _ L O W           ( 0 x 0 1 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   l o w   l e v e l   t r i g g e r e d   i n t e r r u p t  
 # d e f i n e   I R Q _ M O D E _ T R I G _ L E V E L _ H I G H         ( 0 x 0 2 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   h i g h   l e v e l   t r i g g e r e d   i n t e r r u p t  
 # d e f i n e   I R Q _ M O D E _ T R I G _ E D G E                     ( 0 x 0 4 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   e d g e   t r i g g e r e d   i n t e r r u p t  
 # d e f i n e   I R Q _ M O D E _ T R I G _ E D G E _ R I S I N G       ( 0 x 0 5 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   r i s i n g   e d g e   t r i g g e r e d   i n t e r r u p t  
 # d e f i n e   I R Q _ M O D E _ T R I G _ E D G E _ F A L L I N G     ( 0 x 0 6 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   f a l l i n g   e d g e   t r i g g e r e d   i n t e r r u p t  
 # d e f i n e   I R Q _ M O D E _ T R I G _ E D G E _ B O T H           ( 0 x 0 7 U L   / * < <   I R Q _ M O D E _ T R I G _ P o s * / )   / / / <   T r i g g e r :   r i s i n g   a n d   f a l l i n g   e d g e   t r i g g e r e d   i n t e r r u p t  
  
 # d e f i n e   I R Q _ M O D E _ T Y P E _ P o s                       ( 3 U )  
 # d e f i n e   I R Q _ M O D E _ T Y P E _ M s k                       ( 0 x 0 1 U L   < <   I R Q _ M O D E _ T Y P E _ P o s )  
 # d e f i n e   I R Q _ M O D E _ T Y P E _ I R Q                       ( 0 x 0 0 U L   < <   I R Q _ M O D E _ T Y P E _ P o s )           / / / <   T y p e :   i n t e r r u p t   s o u r c e   t r i g g e r s   C P U   I R Q   l i n e  
 # d e f i n e   I R Q _ M O D E _ T Y P E _ F I Q                       ( 0 x 0 1 U L   < <   I R Q _ M O D E _ T Y P E _ P o s )           / / / <   T y p e :   i n t e r r u p t   s o u r c e   t r i g g e r s   C P U   F I Q   l i n e  
  
 # d e f i n e   I R Q _ M O D E _ D O M A I N _ P o s                   ( 4 U )  
 # d e f i n e   I R Q _ M O D E _ D O M A I N _ M s k                   ( 0 x 0 1 U L   < <   I R Q _ M O D E _ D O M A I N _ P o s )  
 # d e f i n e   I R Q _ M O D E _ D O M A I N _ N O N S E C U R E       ( 0 x 0 0 U L   < <   I R Q _ M O D E _ D O M A I N _ P o s )       / / / <   D o m a i n :   i n t e r r u p t   i s   t a r g e t i n g   n o n - s e c u r e   d o m a i n  
 # d e f i n e   I R Q _ M O D E _ D O M A I N _ S E C U R E             ( 0 x 0 1 U L   < <   I R Q _ M O D E _ D O M A I N _ P o s )       / / / <   D o m a i n :   i n t e r r u p t   i s   t a r g e t i n g   s e c u r e   d o m a i n  
  
 # d e f i n e   I R Q _ M O D E _ C P U _ P o s                         ( 5 U )  
 # d e f i n e   I R Q _ M O D E _ C P U _ M s k                         ( 0 x F F U L   < <   I R Q _ M O D E _ C P U _ P o s )  
 # d e f i n e   I R Q _ M O D E _ C P U _ A L L                         ( 0 x 0 0 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   a l l   C P U s  
 # d e f i n e   I R Q _ M O D E _ C P U _ 0                             ( 0 x 0 1 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   0  
 # d e f i n e   I R Q _ M O D E _ C P U _ 1                             ( 0 x 0 2 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   1  
 # d e f i n e   I R Q _ M O D E _ C P U _ 2                             ( 0 x 0 4 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   2  
 # d e f i n e   I R Q _ M O D E _ C P U _ 3                             ( 0 x 0 8 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   3  
 # d e f i n e   I R Q _ M O D E _ C P U _ 4                             ( 0 x 1 0 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   4  
 # d e f i n e   I R Q _ M O D E _ C P U _ 5                             ( 0 x 2 0 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   5  
 # d e f i n e   I R Q _ M O D E _ C P U _ 6                             ( 0 x 4 0 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   6  
 # d e f i n e   I R Q _ M O D E _ C P U _ 7                             ( 0 x 8 0 U L   < <   I R Q _ M O D E _ C P U _ P o s )             / / / <   C P U :   i n t e r r u p t   t a r g e t s   C P U   7  
  
 # d e f i n e   I R Q _ M O D E _ E R R O R                             ( 0 x 8 0 0 0 0 0 0 0 U L )                                         / / / <   B i t   i n d i c a t i n g   m o d e   v a l u e   e r r o r  
  
 / *   I n t e r r u p t   p r i o r i t y   b i t - m a s k s   * /  
 # d e f i n e   I R Q _ P R I O R I T Y _ M s k                         ( 0 x 0 0 0 0 F F F F U L )                                         / / / <   I n t e r r u p t   p r i o r i t y   v a l u e   b i t - m a s k  
 # d e f i n e   I R Q _ P R I O R I T Y _ E R R O R                     ( 0 x 8 0 0 0 0 0 0 0 U L )                                         / / / <   B i t   i n d i c a t i n g   p r i o r i t y   v a l u e   e r r o r  
  
 / / /   I n i t i a l i z e   i n t e r r u p t   c o n t r o l l e r .  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ I n i t i a l i z e   ( v o i d ) ;  
  
 / / /   R e g i s t e r   i n t e r r u p t   h a n d l e r .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ p a r a m [ i n ]           h a n d l e r               i n t e r r u p t   h a n d l e r   f u n c t i o n   a d d r e s s  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ S e t H a n d l e r   ( I R Q n _ I D _ t   i r q n ,   I R Q H a n d l e r _ t   h a n d l e r ) ;  
  
 / / /   G e t   t h e   r e g i s t e r e d   i n t e r r u p t   h a n d l e r .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   r e g i s t e r e d   i n t e r r u p t   h a n d l e r   f u n c t i o n   a d d r e s s .  
 I R Q H a n d l e r _ t   I R Q _ G e t H a n d l e r   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   E n a b l e   i n t e r r u p t .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ E n a b l e   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   D i s a b l e   i n t e r r u p t .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ D i s a b l e   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   G e t   i n t e r r u p t   e n a b l e   s t a t e .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   -   i n t e r r u p t   i s   d i s a b l e d ,   1   -   i n t e r r u p t   i s   e n a b l e d .  
 u i n t 3 2 _ t   I R Q _ G e t E n a b l e S t a t e   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   C o n f i g u r e   i n t e r r u p t   r e q u e s t   m o d e .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ p a r a m [ i n ]           m o d e                     m o d e   c o n f i g u r a t i o n  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ S e t M o d e   ( I R Q n _ I D _ t   i r q n ,   u i n t 3 2 _ t   m o d e ) ;  
  
 / / /   G e t   i n t e r r u p t   m o d e   c o n f i g u r a t i o n .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   c u r r e n t   i n t e r r u p t   m o d e   c o n f i g u r a t i o n   w i t h   o p t i o n a l   I R Q _ M O D E _ E R R O R   b i t   s e t .  
 u i n t 3 2 _ t   I R Q _ G e t M o d e   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   G e t   I D   n u m b e r   o f   c u r r e n t   i n t e r r u p t   r e q u e s t   ( I R Q ) .  
 / / /   \ r e t u r n   i n t e r r u p t   I D   n u m b e r .  
 I R Q n _ I D _ t   I R Q _ G e t A c t i v e I R Q   ( v o i d ) ;  
  
 / / /   G e t   I D   n u m b e r   o f   c u r r e n t   f a s t   i n t e r r u p t   r e q u e s t   ( F I Q ) .  
 / / /   \ r e t u r n   i n t e r r u p t   I D   n u m b e r .  
 I R Q n _ I D _ t   I R Q _ G e t A c t i v e F I Q   ( v o i d ) ;  
  
 / / /   S i g n a l   e n d   o f   i n t e r r u p t   p r o c e s s i n g .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ E n d O f I n t e r r u p t   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   S e t   i n t e r r u p t   p e n d i n g   f l a g .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ S e t P e n d i n g   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   G e t   i n t e r r u p t   p e n d i n g   f l a g .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   -   i n t e r r u p t   i s   n o t   p e n d i n g ,   1   -   i n t e r r u p t   i s   p e n d i n g .  
 u i n t 3 2 _ t   I R Q _ G e t P e n d i n g   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   C l e a r   i n t e r r u p t   p e n d i n g   f l a g .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ C l e a r P e n d i n g   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   S e t   i n t e r r u p t   p r i o r i t y   v a l u e .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ p a r a m [ i n ]           p r i o r i t y             i n t e r r u p t   p r i o r i t y   v a l u e  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ S e t P r i o r i t y   ( I R Q n _ I D _ t   i r q n ,   u i n t 3 2 _ t   p r i o r i t y ) ;  
  
 / / /   G e t   i n t e r r u p t   p r i o r i t y .  
 / / /   \ p a r a m [ i n ]           i r q n                     i n t e r r u p t   I D   n u m b e r  
 / / /   \ r e t u r n   c u r r e n t   i n t e r r u p t   p r i o r i t y   v a l u e   w i t h   o p t i o n a l   I R Q _ P R I O R I T Y _ E R R O R   b i t   s e t .  
 u i n t 3 2 _ t   I R Q _ G e t P r i o r i t y   ( I R Q n _ I D _ t   i r q n ) ;  
  
 / / /   S e t   p r i o r i t y   m a s k i n g   t h r e s h o l d .  
 / / /   \ p a r a m [ i n ]           p r i o r i t y             p r i o r i t y   m a s k i n g   t h r e s h o l d   v a l u e  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ S e t P r i o r i t y M a s k   ( u i n t 3 2 _ t   p r i o r i t y ) ;  
  
 / / /   G e t   p r i o r i t y   m a s k i n g   t h r e s h o l d  
 / / /   \ r e t u r n   c u r r e n t   p r i o r i t y   m a s k i n g   t h r e s h o l d   v a l u e   w i t h   o p t i o n a l   I R Q _ P R I O R I T Y _ E R R O R   b i t   s e t .  
 u i n t 3 2 _ t   I R Q _ G e t P r i o r i t y M a s k   ( v o i d ) ;  
  
 / / /   S e t   p r i o r i t y   g r o u p i n g   f i e l d   s p l i t   p o i n t  
 / / /   \ p a r a m [ i n ]           b i t s                     n u m b e r   o f   M S B   b i t s   i n c l u d e d   i n   t h e   g r o u p   p r i o r i t y   f i e l d   c o m p a r i s o n  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t   I R Q _ S e t P r i o r i t y G r o u p B i t s   ( u i n t 3 2 _ t   b i t s ) ;  
  
 / / /   G e t   p r i o r i t y   g r o u p i n g   f i e l d   s p l i t   p o i n t  
 / / /   \ r e t u r n   c u r r e n t   n u m b e r   o f   M S B   b i t s   i n c l u d e d   i n   t h e   g r o u p   p r i o r i t y   f i e l d   c o m p a r i s o n   w i t h  
 / / /                   o p t i o n a l   I R Q _ P R I O R I T Y _ E R R O R   b i t   s e t .  
 u i n t 3 2 _ t   I R Q _ G e t P r i o r i t y G r o u p B i t s   ( v o i d ) ;  
  
 # e n d i f     / /   I R Q _ C T R L _ H _  